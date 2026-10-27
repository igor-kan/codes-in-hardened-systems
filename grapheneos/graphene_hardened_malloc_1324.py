"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1324."""

def spec_graphene_hardened_malloc_1324() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1324, "quarantine_slabs": 13, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1324():
    s = spec_graphene_hardened_malloc_1324()
    assert s["spec_id"] == 1324
