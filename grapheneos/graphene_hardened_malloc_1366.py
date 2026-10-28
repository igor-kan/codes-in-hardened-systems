"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1366."""

def spec_graphene_hardened_malloc_1366() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1366, "quarantine_slabs": 7, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1366():
    s = spec_graphene_hardened_malloc_1366()
    assert s["spec_id"] == 1366
