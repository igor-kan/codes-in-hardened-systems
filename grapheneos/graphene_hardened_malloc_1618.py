"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1618."""

def spec_graphene_hardened_malloc_1618() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1618, "quarantine_slabs": 3, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1618():
    s = spec_graphene_hardened_malloc_1618()
    assert s["spec_id"] == 1618
